package gui.gra.ui;

import gui.gra.GameFactory;
import gui.gra.rdzen.Game;

import java.awt.event.ActionEvent;
import java.awt.event.KeyEvent;

import javax.swing.*;

public class MainFrame extends JFrame {
	
	public MainFrame(Game game)
	{
		this.game=game;
		menuBar=new JMenuBar();
		mainMenu=new JMenu("Główne menu");
		NewGameAction newGame=new NewGameAction(game,this);
		mainMenu.add(newGame);
		mainMenu.add(new AbstractAction("Exit")
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				System.exit(0);
				
			}
			
			
		});
		menuBar.add(mainMenu);
		this.setJMenuBar(menuBar);
		this.setSize(400, 400);
		
		
		
		
	}
	public void rozpocznijGre()
	{
		
		gracz1Panel=new SetShipPanel(game,this);
	
		gracz2Panel=new PlanszaPanel(game.getSecondPlayer().getPlansza(),gracz1Panel.getModel());
		gracz2Panel.addGame(game);
		
		gracz1Panel.setEnabled(false);
		gracz2Panel.setEnabled(false);
		centerPanel.add(gracz1Panel);
		centerPanel.add(new JSeparator(SwingConstants.VERTICAL));
		centerPanel.add(gracz2Panel);
		
		centerPanel.setLayout(new BoxLayout(centerPanel,BoxLayout.X_AXIS));
		this.add(centerPanel);
		
		this.pack();
	}
	
	
	
	
	
	private JMenuBar menuBar;
	private JMenu mainMenu,aboutMenu;
	private JMenuItem menuItem;
	private SetShipPanel gracz1Panel;
	private PlanszaPanel gracz2Panel;
	private Game game;
	JPanel centerPanel=new JPanel();
	

}
