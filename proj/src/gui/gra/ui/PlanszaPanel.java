package gui.gra.ui;

import gui.gra.rdzen.Game;
import gui.gra.rdzen.Plansza;
import gui.gra.rdzen.wyjatki.EndGame;

import java.awt.GridLayout;
import java.awt.Point;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JOptionPane;
import javax.swing.JPanel;

/**
 * @author wemstar
 *
 */
public class PlanszaPanel extends JPanel {
	
	/**
	 * @param plansza  panel reprezentujący plansze
	 * @param model	model tabeli
	 */
	public PlanszaPanel(Plansza plansza,SetShipPanel.StatkiTableModel model)
	{
		this.setLayout(new GridLayout(10,10));
		 this.model=model;
		this.plansza=plansza;
		utworzPrzyciski();
		hit=createImageIcon("resources/Hit.png","hit");
		mis=createImageIcon("resources/Mis.png","mis");
	}
	
	
	
	
	/**
	 * tworzy siatke przycisków
	 */
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
							Game.BoolPar boll=gra.realPlayerMove(punkt);
							if(boll.getFirst())button.setIcon(hit);
							else button.setIcon(mis);
							Point last=gra.getSecondLastHit();
							if(boll.getSecond())model.setValueAt(hit, last.x,last.y);
							else model.setValueAt(mis, last.x,last.y);
							//zSystem.out.println(boll.getSecond());
								
						} catch (EndGame e) {
							// TODO Auto-generated catch block
							JOptionPane.showMessageDialog(PlanszaPanel.this,e.getMessage());
						}
						
						
					}
					
				});
			}
		}
		

	}
	
	/**
	 * wczytuje plik ze scieżki
	 * @param path scieżka
	 * @param description opis obrazka
	 * @return Icone
	 */
	protected ImageIcon createImageIcon(String path,String description) {
		java.net.URL imgURL = getClass().getResource(path);
		if (imgURL != null) {
			return new ImageIcon(imgURL, description);
		} else {
			System.err.println("Couldn't find file: " + getClass());
				return null;
		}
	}
	
	
	private Plansza plansza;
	private Game gra;
	private ImageIcon hit;
	private ImageIcon mis;
	SetShipPanel.StatkiTableModel model;

	public void addGame(Game game) {
		gra=game;
		
	}
}
