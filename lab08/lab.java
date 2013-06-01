import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


public class lab
{
	public static void main(String[] args)
	{
		EventQueue.invokeLater(new Runnable()
		{
			public void run()
			{
				JFrame frame=new labFrame();
				frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				frame.setVisible(true);

			}
		});
	}
}

class labFrame extends JFrame
{
	labFrame()
	{
		setTitle("lab");
		setSize(DEFAULT_HEIGHT,DEFAULT_WIDTH);
		JPanel panel=new labPanel();
		add(panel);

	}




	private static final int DEFAULT_HEIGHT=400;
	private static final int DEFAULT_WIDTH=400;

}

class labPanel extends JPanel
{
	labPanel()
	{

	}
}