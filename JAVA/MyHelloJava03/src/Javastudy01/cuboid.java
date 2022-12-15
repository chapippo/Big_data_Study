package Javastudy01;

public class cuboid extends Rectangle_sol {
	private int z;

	public int getZ() {
		return z;
	}

	public void setZ(int z) {
		this.z = z;
	}
	
	public double getCuvoidVolumn() {
		return getW()*getH()*getZ();
	}

}
