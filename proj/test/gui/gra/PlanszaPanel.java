package gui.gra;

import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JPanel;

public class PlanszaPanel extends JPanel {
	public PlanszaPanel()
	{
		this.setLayout(new GridLayout(10,10));
		utworzPrzyciski();
	}
	
	
	private void utworzPrzyciski()
	{
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{
				add(new JButton());
			}
		}
	}

}
