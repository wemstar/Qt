package gui.gra.ui;

import gui.gra.rdzen.Game;
import gui.gra.rdzen.Plansza;

import java.awt.event.ActionEvent;
import java.awt.event.WindowAdapter;

import javax.swing.*;

public class NewGameAction extends AbstractAction {

	public NewGameAction(Game game)
	{
		super("New Game");
		gra=game;
	}
	@Override
	public void actionPerformed(ActionEvent arg0) {
		JFrame frame=new SetShipFrame(gra);
		frame.addWindowListener(new WindowAdapter()
		{
			
		});
		frame.setVisible(true);
		frame.pack();

	}
	
	
	private Game gra;

}
