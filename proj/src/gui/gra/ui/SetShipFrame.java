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

public class SetShipFrame extends JFrame {
	
	SetShipFrame(Game gra)
	{
		game=gra;
		plansza=gra.getFirstPlayer().getPlansza();
		
		model=new StatkiTableModel(plansza);
	    table = new JTable(model);
	    table.setFillsViewportHeight(true);
	    JScrollPane scrollpane = new JScrollPane(table);
	    table.setCellSelectionEnabled(true);
	    add(table);
		JToolBar toolBar=new JToolBar();
		addButton(toolBar,1,"resources/JednoMasztowiec.png");
		addButton(toolBar,2,"resources/DwuMasztowiec.png");
		addButton(toolBar,3,"resources/TrzyMasztowiec.png");
		addButton(toolBar,4,"resources/CzteroMasztowiec.png");
		add(toolBar,BorderLayout.NORTH);
		add(status,BorderLayout.SOUTH);
		
		
		
	}
	private void addButton(JToolBar toolBar,final int i, final String resource) {
		JButton button=new JButton(createImageIcon(resource,"cos"));
		button.setActionCommand(Integer.toString(i));
		button.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				int y=table.getSelectedColumn();
				int x=table.getSelectedRow();
				int dim=table.getSelectedColumnCount()>table.getSelectedRowCount()?1:0;
				
				try {
					
					plansza.addShip(new Point(x,y), i, dim);
					status.setText(resource);
					model.fireTableDataChanged();
					
					
					
					
					
				} catch (BadPositionException | LimitException e) {
					
					status.setText(e.getMessage());
					
					
				}
				finally{
					SetShipFrame.this.validate();
					SetShipFrame.this.pack();
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
			data=plan.getShips();
		}
		public Object getValueAt(int row, int col) {
			Map<Point,Integer> map=new HashMap<Point,Integer>();
			for(Statek stat:data)
			{
				map.putAll(stat.getPozycja());
			}
	        return map.get(new Point(row,col));
	    }
		public int getRowCount() { return 10; }
		public int getColumnCount() { return 10; }
		
		public void setValueAt(Object aValue, int row, int col) 
		{
			
			
			fireTableCellUpdated(row, col);
			System.out.println(" "+aValue+row+col);
		}
		
		
		
		
		
		
		private java.util.List<Statek> data;
	}
	
	
	
	
	
	private Plansza plansza;
	private JTable table;
	private StatkiTableModel model;
	private Game game;
	private JLabel status=new JLabel();
	

}
