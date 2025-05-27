/*

Problem_6 >> Write a program to ask user to enter : first name amd last name

 */


namespace PracticalExample
{
    internal class Program
    {
        public class InfoPerson
        {
            public InfoPerson(string firstName = "Null", string lastName = "Null")
            {
                FirstName = firstName;
                LastName = lastName;
            }

            public string FirstName { get; set; }
            public string LastName { get; set; }
        }
        public static InfoPerson ReadInfoPerson()
        {
            InfoPerson person = new InfoPerson();
            Console.WriteLine("Write a program to ask user to enter : first name amd last name\n");
            Console.Write("Enter Your First Name : ");
            person.FirstName = Console.ReadLine();

            Console.Write("Enter Your Last Name : ");
            person.LastName = Console.ReadLine();

            return person;
        }

        public static void PrintFullName(InfoPerson person)
        {
            Console.WriteLine($"The Full Name Is {person.FirstName} {person.LastName}");
        }


        static void Main(string[] args)
        {
            PrintFullName(ReadInfoPerson());
        }
    }
}