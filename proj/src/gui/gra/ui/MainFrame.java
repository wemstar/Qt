package gui.gra.ui;

import java.awt.event.ActionEvent;
import java.awt.event.KeyEvent;

import javax.swing.*;

public class MainFrame extends JFrame {
	
	public MainFrame()
	{
		menuBar=new JMenuBar();
		mainMenu=new JMenu("Główne menu");
		NewGameAction newGame=new NewGameAction(this);
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
		JPanel centerPanel=new JPanel();
		gracz1Panel=new PlanszaPanel();
	
		gracz2Panel=new PlanszaPanel();
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
	private PlanszaPanel gracz1Panel;
	private PlanszaPanel gracz2Panel;
	

}