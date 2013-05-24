package gui.gra.ui;

import gui.gra.rdzen.Game;
import gui.gra.rdzen.Plansza;
import gui.gra.rdzen.wyjatki.EndGame;

import java.awt.GridLayout;
import java.awt.Point;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class PlanszaPanel extends JPanel {
	public PlanszaPanel(Plansza plansza)
	{
		this.setLayout(new GridLayout(10,10));
		
		this.plansza=plansza;
		utworzPrzyciski();
	}
	public void odswierz()
	{
		this.removeAll();
		utworzPrzyciski();
	}
	
	
	private void utworzPrzyciski()
	{
		for(int x=0;x<10;++x)
		{
			for(int y=0;y<10;++y)
			{
				final Point punkt=new Point(x,y);
				final JButton button=new JButton();
				add(button);
				
				button.addActionListener(new ActionListener()
				{

					@Override
					public void actionPerformed(ActionEvent arg0) {
					
						try {
							if(gra.realPlayerMove(punkt))button.setText("Hit");
							else button.setText("Miss");
								
						} catch (EndGame e) {
							// TODO Auto-generated catch block
							JOptionPane.showMessageDialog(PlanszaPanel.this,e.getMessage());
						}
						
						
					}
					
				});
			}
		}
		
//		add(new JTable(10,10));
	}
	
	
	private Plansza plansza;
	private Game gra;


	public void addGame(Game game) {
		gra=game;
		
	}
}
