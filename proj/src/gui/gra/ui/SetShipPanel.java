package gui.gra.ui;

import java.awt.*;
import java.awt.event.*;
import java.net.URL;
import java.util.*;

import gui.gra.rdzen.Game;
import gui.gra.rdzen.Plansza;
import gui.gra.rdzen.Statek;
import gui.gra.rdzen.wyjatki.BadPositionException;
import gui.gra.rdzen.wyjatki.LimitException;

import javax.swing.*;
import javax.swing.table.AbstractTableModel;
import javax.swing.table.TableModel;

public class SetShipPanel extends JPanel {
	
	SetShipPanel(Game gra,MainFrame fram)
	{
		mainFrame=fram;
		game=gra;
		plansza=gra.getFirstPlayer().getPlansza();
		setLayout(new BorderLayout());
		model=new StatkiTableModel(plansza);
	    table = new JTable(model)
        {
            //  Returning the Class of each column will allow different
            //  renderers to be used based on Class
            public Class getColumnClass(int column)
            {
                return ImageIcon.class;
            }
            
        };
	    table.setFillsViewportHeight(true);
	    JScrollPane scrollpane = new JScrollPane(table);
	    table.setRowHeight(32);
	    table.setCellSelectionEnabled(true);
	    add(table);
	    //mainFrame.add(table);
	    JToolBar toolBar=new JToolBar();
		addButton(toolBar,1,"resources/JednoMasztowiec.png");
		addButton(toolBar,2,"resources/DwuMasztowiec.png");
		addButton(toolBar,3,"resources/TrzyMasztowiec.png");
		addButton(toolBar,4,"resources/CzteroMasztowiec.png");
		add(toolBar,BorderLayout.NORTH);
		add(status,BorderLayout.SOUTH);
		
		
		
	}
	public StatkiTableModel getModel()
	{
		return model;
	}
	private void addButton(final JToolBar toolBar,final int i, final String resource) {
		final ImageIcon imageIcon=createImageIcon(resource,"cos");
		JButton button=new JButton(imageIcon);
		button.setActionCommand(Integer.toString(i));
		button.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				int y=table.getSelectedColumn();
				int x=table.getSelectedRow();
				int dim=table.getSelectedColumnCount()>table.getSelectedRowCount()?Statek.DOWN:Statek.RIGHT;
				
				try {
					
					plansza.addShip(new Point(x,y), i, dim);
					status.setText(resource);
					int dx=(dim==Statek.RIGHT)?1:0;
					int dy=(dim==Statek.DOWN)?1:0;
					for(int j=0;j<i;++j)
					{
						model.setValueAt(imageIcon, x+j*dx, y+j*dy);
					}
					
					model.fireTableDataChanged();
					if(plansza.isOverLimit())
					{
						
						SetShipPanel.this.setEnabled(false);
						SetShipPanel.this.remove(toolBar);
					}
					
					
					
					
					
				} catch (BadPositionException | LimitException e) {
					
					status.setText(e.getMessage());
					
					
				}
				finally{
					SetShipPanel.this.validate();
					mainFrame.pack();
				}
				
				
				
			}
			
		});
		toolBar.add(button);
		
	}
	protected ImageIcon createImageIcon(String path,String description) {
		java.net.URL imgURL = getClass().getResource(path);
		if (imgURL != null) {
			return new ImageIcon(imgURL, description);
		} else {
			System.err.println("Couldn't find file: " + getClass());
				return null;
		}
	}
	
	class StatkiTableModel extends AbstractTableModel
	{
		public StatkiTableModel(Plansza plan)
		{
			
		}
		public Object getValueAt(int row, int col) {
			table.revalidate();
			return data.get(new Point(row,col));
	    }
		public int getRowCount() { return 10; }
		public int getColumnCount() { return 10; }
		
		public void setValueAt(Object aValue, int row, int col) 
		{
			
			data.put(new Point(row,col), (ImageIcon)aValue);
			fireTableCellUpdated(row, col);
			//System.out.println(" "+aValue+row+col);
		}
		
		
		
		
		
		
		private java.util.Map<Point,ImageIcon> data=new HashMap<Point,ImageIcon>();
	}
	
	
	
	
	
	private Plansza plansza;
	private JTable table;
	private StatkiTableModel model;
	private Game game;
	private JLabel status=new JLabel();
	MainFrame mainFrame;
	
	

}
