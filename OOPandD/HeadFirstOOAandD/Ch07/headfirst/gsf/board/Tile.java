package headfirst.gsf.board;

import java.util.linkedList;
import java.util.List;

import headfirst.gsf.unit.Unit;

public class Tile{

	private List units;

	public Tile(){

		units = new LinkedList();
	}

	protected void addUnit(Unit unit){

		units.add(unit);

	}

	protected void removeUnit(Unit unit){

		units.remove(unit);

	}

}