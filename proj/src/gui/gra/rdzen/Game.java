package gui.gra.rdzen;

import gui.gra.rdzen.wyjatki.EndGame;

import java.awt.Point;

public class Game {

	public Gracz getSecondPlayer() {
		// TODO Auto-generated method stub
		return secondPlayer;
	}

	public Gracz getFirstPlayer() {
		// TODO Auto-generated method stub
		return firstPlayer;
	}

	public void setPlayers(Gracz player1, Gracz player2) {
		firstPlayer=player1;
		secondPlayer=player2;
		
	}
	public boolean isEndGame()
	{
		return firstPlayer.przegrana()||secondPlayer.przegrana();
	}
	public BoolPar realPlayerMove(Point punkt)throws EndGame
	{
		boolean isHit1=secondPlayer.reciveHit(punkt);
		
		boolean isHit2=firstPlayer.reciveHit(secondPlayer.getNextMove());
		if(isEndGame())
		{
			if(firstPlayer.przegrana())throw new EndGame("Przegral gracz 1");
			else throw new EndGame("Przegral gracz 2");
		}
		return new BoolPar(isHit1,isHit2);
		
	}
	public class BoolPar
	{
		private boolean second;
		private boolean first;

		BoolPar(boolean first,boolean second)
		{
			this.first=first;
			this.second=second;
		}
		public boolean getFirst(){return first;}
		public boolean getSecond(){return second;}
	}
	public Point getSecondLastHit()
	{
		return secondPlayer.lastHit();
	}
	
	
	
	
	Gracz firstPlayer;
	Gracz secondPlayer;

}
