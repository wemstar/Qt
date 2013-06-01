import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


class lab08 {

	public static void main(String[] args) {

		budujGui();

		


		
	}
	private static void budujGui()
	{
		EventQueue.invokeLater(new Runnable()
		{
			public void run()
			{
				
				frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				frame.setVisible(true);
				final JPanel panelCenter=new JPanel();
				JPanel panelSouth=new JPanel();
				frame.add(panelCenter);
				frame.add(panelSouth,BorderLayout.SOUTH);
				JButton topButton=new JButton("Dodaj przycisk ");
				topButton.addActionListener(new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
						final JButton numberButton=new JButton(String.format("(%1$d)",i));
						++i;
						panelCenter.add(numberButton);
						frame.pack();
						frame.validate();
						numberButton.addActionListener(new ActionListener()
						{
							public void actionPerformed(ActionEvent e){
								panelCenter.remove(numberButton);
								frame.pack();
								frame.validate();
							}

						});
					}

				});
				frame.add(topButton,BorderLayout.NORTH);

				createButton(panelSouth,panelCenter,new FlowLayout(),"Flow");
				createButton(panelSouth,panelCenter,new BoxLayout(panelCenter,BoxLayout.X_AXIS),"VBox");
				createButton(panelSouth,panelCenter,new BoxLayout(panelCenter,BoxLayout.Y_AXIS),"HBox");

				frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

				frame.setVisible(true);
				frame.pack();


			}
		});
	}
	private static void createButton(final JPanel centerPanle,final JPanel panel,final LayoutManager lay,final String text )
	{
		JButton button=new JButton(text);
		button.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{
				panel.setLayout(lay);
				frame.pack();
				panel.validate();
			} 


		});
		centerPanle.add(button);
	}


	private final static JFrame frame=new JFrame();
	private static int i=0;
	
}