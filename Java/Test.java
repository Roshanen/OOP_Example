class Test{
    public static void main(String[] args){
        Army army1 = new Army("Lung Tu", 200, 69, 44);
        army1.introduce();
        System.out.println();
        
        Infantry army2 = new Infantry("Pom", 155, 99, 20, "chair");
        army2.introduce();
        System.out.println();

        Medical army3 = new Medical("Somsri", 112, 47, -1, "powder");
        army3.introduce();
        System.out.println();
    }
}