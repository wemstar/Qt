package gui.gra.rdzen;

import java.awt.Point;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

/**
 * @author wemstar
 * Klasa reperzentuje ruch polegający na ostrzelaniu losowych punktow
 */
public class RandomMove implements Move {

	/* (non-Javadoc)
	 * @see gui.gra.rdzen.Move#nextMove()
	 */
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

	/* (non-Javadoc)
	 * @see gui.gra.rdzen.Move#setPlansza(gui.gra.rdzen.Plansza)
	 */
	@Override
	public void setPlansza(Plansza plansza) {
		this.plansza=plansza;

	}
	
	
	private List<Point> strzaly=new ArrayList<Point>();
	private Plansza plansza;
	private Random rand=new Random();
	

}
