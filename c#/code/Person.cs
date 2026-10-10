public class Person
{
    protected int id;
    public string name;
    protected string phone;
    protected string email;

    public Person(int id, string name, string phone, string email)
    {
        this.id = id;
        this.name = name;
        this.phone = phone;
        this.email = email;
    }

    public void updatePhone(string phone)
    {
        this.phone = phone;
    }

    public void updateEmail(string email)
    {
        this.email = email;
    }

    public void displayPerson()
    {
        Console.WriteLine("ID : " + id);
        Console.WriteLine("Name : " + name);
        Console.WriteLine("Phone : " + phone);
        Console.WriteLine("Email : " + email);
    }
}