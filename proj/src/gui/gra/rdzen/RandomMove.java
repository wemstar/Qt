package gui.gra.rdzen;

import java.awt.Point;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class RandomMove implements Move {

	@Override
	public Point nextMove() {
		Point punkt;
		do 
		{
			punkt=new Point(rand.nextInt(10),rand.nextInt(10));
		}while(strzaly.contains(punkt));
		
		strzaly.add(punkt);
		return punkt;

	}

	@Override
	public void setPlansza(Plansza plansza) {
		this.plansza=plansza;

	}
	
	
	private List<Point> strzaly=new ArrayList<Point>();
	private Plansza plansza;
	private Random rand=new Random();
	

}
