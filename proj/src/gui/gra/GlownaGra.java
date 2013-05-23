package gui.gra;

import gui.gra.ui.MainFrame;

import java.awt.EventQueue;

import javax.swing.JFrame;

public class GlownaGra {
	
	
	
	public static void main(String[] args)
	{
		
		GameFactory gra=new GameFactory();
		gra.utworzGre();
		gra.pokazOkno();
		
		
	}

}
