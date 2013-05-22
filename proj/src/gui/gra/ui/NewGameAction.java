package gui.gra.ui;

import java.awt.event.ActionEvent;
import java.awt.event.WindowAdapter;

import javax.swing.*;

public class NewGameAction extends AbstractAction {

	public NewGameAction(JFrame frame)
	{
		super("New Game");
	}
	@Override
	public void actionPerformed(ActionEvent arg0) {
		JFrame frame=new SetShipFrame();
		frame.addWindowListener(new WindowAdapter()
		{
			
		});
		frame.setVisible(true);
		frame.pack();

	}
	
	
	private JFrame main;

}
