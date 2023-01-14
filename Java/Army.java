public class Army 
{
    protected String name;
    protected double height;
    protected double weight;
    protected int badge;

    public void setName(String rname){
        this.name = rname;
    }
    public void setHeight(double rheight){
        this.height = rheight;
    }
    public void setWeight(double rweight){
        this.weight = rweight;
    }
    public void setBadge(int rbadge){
        this.badge = rbadge;
    }
    public String getName(){
        return this.name;
    }
    public double getHeight(){
        return this.height;
    }
    public double getWeight(){
        return this.weight;
    }
    public int getBadge(){
        return this.badge;
    }

    protected Army(String rname, double rheight, double rweight, int rbadge)
    {
        this.name = rname;
        this.height = rheight;
        this.weight = rweight;
        this.badge = rbadge;
    }

    protected void introduce(){
        System.out.println("Name : " + this.name);
        System.out.println("Height : " + this.height);
        System.out.println("Weight : " + this.weight);
        System.out.println("Badge : " + this.badge);
    }
}