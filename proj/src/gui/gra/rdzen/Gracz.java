package gui.gra.rdzen;

import java.awt.Point;

public class Gracz {
	
	
	
	public void setPlansza(Plansza plan)
	{
		plansza=plan;
	}
	public Plansza getPlansza()
	{
		return plansza;
	}
	public boolean przegrana()
	{
		return plansza.isLoser();
	}
	public void setMove(Move mov)
	{
		move=mov;
		move.setPlansza(plansza);
	}
	public Point getNextMove()
	{
		last=move.nextMove();
		return last;
	}
	public boolean reciveHit(Point strzal)
	{
		return plansza.isHitShip(strzal);
	}
	
	
	
	
	
	public Move move;
	private Plansza plansza;
	public Point lastHit() {
		// TODO Auto-generated method stub
		return last;
	}
	Point last;

}
