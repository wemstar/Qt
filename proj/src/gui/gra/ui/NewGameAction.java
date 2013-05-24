package gui.gra.ui;

import gui.gra.rdzen.Game;

import java.awt.event.ActionEvent;

import javax.swing.AbstractAction;

public class NewGameAction extends AbstractAction {

	public NewGameAction(Game game,MainFrame frame)
	{
		super("New Game");
		gra=game;
		mainFrame=frame;
		
	}
	@Override
	public void actionPerformed(ActionEvent arg0) {
		
		
		mainFrame.rozpocznijGre();
	}
	
	
	private Game gra;
	private MainFrame mainFrame;

}
