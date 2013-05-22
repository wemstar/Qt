package gui.gra.ui;

import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.*;

public class PlanszaPanel extends JPanel {
	public PlanszaPanel()
	{
		this.setLayout(new GridLayout(10,10));
		
		
		utworzPrzyciski();
	}
	
	
	private void utworzPrzyciski()
	{
		for(int x=0;x<10;++x)
		{
			for(int y=0;y<10;++y)
			{
				add(new JButton());
			}
		}
		
//		add(new JTable(10,10));
	}
	
	

}
