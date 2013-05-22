package gui.gra.ui;

import java.awt.*;
import java.awt.event.*;
import java.net.URL;

import gui.gra.rdzen.Plansza;
import gui.gra.wyjatki.BadPositionException;
import gui.gra.wyjatki.LimitException;

import javax.swing.*;

public class SetShipFrame extends JFrame {
	
	SetShipFrame()
	{
		add(table);
		table.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
		JToolBar toolBar=new JToolBar();
		addButton(toolBar,"1","resource/jednoMasztowiec.png");
		addButton(toolBar,"2","resource/jednoDwu.png");
		addButton(toolBar,"3","resource/jednoTroj.png");
		addButton(toolBar,"4","resource/jednoCztero.png");
		add(toolBar,BorderLayout.NORTH);
		
		
		
	}
	private void addButton(JToolBar toolBar, String i, final String resource) {
		JButton button=new JButton(resource);
		button.setActionCommand(i);
		button.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				int y=table.getSelectedColumn();
				int x=table.getSelectedRow();
				int dim=table.getSelectedColumnCount()>table.getSelectedRowCount()?0:1;
				
				try {
					SetShipFrame.this.add(new Label(arg0.getActionCommand()),BorderLayout.SOUTH);
					plansza.addShip(new Point(x,y), 1, dim);
					
					
				} catch (BadPositionException | LimitException e) {
					// TODO Auto-generated catch block
					SetShipFrame.this.add(new Label(e.getMessage()),BorderLayout.SOUTH);
					
				}
				finally{
					SetShipFrame.this.validate();
					SetShipFrame.this.pack();
				}
				
				
				
			}
			
		});
		toolBar.add(button);
		
	}
	
	
	
	
	
	private Plansza plansza=new Plansza();
	private JTable table=new JTable(10,10);
	

}
