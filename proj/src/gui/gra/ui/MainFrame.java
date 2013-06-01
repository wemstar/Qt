package gui.gra.ui;

import gui.gra.rdzen.Game;
import gui.gra.rdzen.GameFactory;

import java.awt.event.ActionEvent;

import javax.swing.AbstractAction;
import javax.swing.BoxLayout;
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JPanel;
import javax.swing.JSeparator;
import javax.swing.SwingConstants;

/**
 * @author wemstar
 * Klasa reprezentujaca głowne okno gry
 */
public class MainFrame extends JFrame {
	
	private GameFactory gameFactory;
	
	public MainFrame(GameFactory game)
	{
		this.gameFactory=game;
		menuBar=new JMenuBar();
		mainMenu=new JMenu("Główne menu");
		AbstractAction newGame=new AbstractAction("New Game")
		{
			
			@Override
			public void actionPerformed(ActionEvent arg0) {
				MainFrame.this.rozpocznijGre();
			}

		};
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
	
	/**
	 * ustawia okienko do rozegrania gry 
	 */
	public void rozpocznijGre()
	{
		game=gameFactory.utworzGre();
		
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
