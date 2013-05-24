package gui.gra.ui;

import gui.gra.rdzen.Game;
import gui.gra.rdzen.Gracz;
import gui.gra.rdzen.Plansza;
import gui.gra.rdzen.RandomMove;

import java.awt.event.ActionEvent;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

import javax.swing.*;

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
