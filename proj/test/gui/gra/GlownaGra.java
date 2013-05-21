package gui.gra;

import java.awt.EventQueue;

public class GlownaGra {
	
	
	
	public static void main(String[] args)
	{
		EventQueue.invokeLater(new Runnable()
		{
			public void run()
			{
				MainFrame frame=new MainFrame();
				frame.setVisible(true);
			}
			
		});
		
	}

}
