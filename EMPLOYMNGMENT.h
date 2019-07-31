int num=0,n=-1,i,exp,age,flag=0;
char name[20],designation[20];
long int code;

class employee
{
    public:
        char name[20];
        long int code;
        char designation[20];
        int exp;
        int age;
    public:
        void getdata(char na[20],long int co,char des[20],int ex,int ag);
        void built_em();
        void insert_em();
        void list_em();
        void delete_em();
        void edit_em();
        void editname(int);
        void editcode(int);
        void editdes(int);
        void editexp(int);
        void editage(int);
        void search_em();
        int cheack();
}emp[MAX],ex;
void menu();
void load();

int employee::cheack()
{
        for(int A=0;A<i;A++)
            if(emp[A].code==emp[i].code)
                return 1;
        return 0;
}

void employee::getdata(char na[20],long int co,char des[20],int ex,int ag)
{
    strcpy(this->name,na);
    this->code=co;
    this->age=ag;
    this->exp=ex;
    strcpy(this->designation,des);
}

void employee::search_em()
{
    system("cls");
    long int code;
    cout<<"\n\n\n\t\t.. .. Welcome To Search Of Employee Database .. .."<<endl<<endl;
    cout<<"\n\n\t\tYou Can Search Only by Job Code Of an Employee";
    cout<<endl<<"\t\tEnter Job Code of an Employee : ";
    cin>>code;
    for(i=0;i<num+n;i++)
        if(emp[i].code==code)
        {
                cout<<"\n\n\n\t\t\t"<<"    EMPLOYEE NAME     "<<"JOB CODE     "<<"    DESIGNATION     "<<"EXPERIENCE  "<<"AGE"<<endl;
                cout<<"\t\t\t"<<"----------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\t"<<setw(22)<<std::left<<emp[i].name<<setw(13)<<emp[i].code<<setw(20)<<std::left<<emp[i].designation<<setw(13)<<emp[i].exp<<setw(3)<<emp[i].age<<endl;
                break;
        }
    if(i==num+n)
    {
        cout<<"\n\t\t\t\tEntered Job code is Invalid..... ";
        cout<<endl<<"\n\t\t\t";
        system("pause");
        menu();
    }
    cout<<endl<<"\n\t\t\t";
    system("pause");
    menu();

}

void employee::edit_em()
{
    long int code;
    char x;
    system("cls");
    cout<<"\n\n\n\t\tEdit for Entry.."<<endl<<"\t\tEnter an Job Code to Edit that Entry : ";
    cin>>code;
    for(i=0;i<num+n;i++)
        if(emp[i].code==code)
            break;
    if(i==num+n)
        {
            cout<<"\n\t\t\t\tEntered Job code is Invalid..... ";
            cout<<endl<<"\n\t\t\t";
            system("pause");
            menu();
        }
    cout<<"\t\t\t\t**** What Do You Want To Edit ****"<<endl;
    cout<<endl<<"\t\t\t\t Press  1 > Name";
    cout<<endl<<"\t\t\t\t Press  2 > Job code";
    cout<<endl<<"\t\t\t\t Press  3 > Designation";
    cout<<endl<<"\t\t\t\t Press  4 > Experience";
    cout<<endl<<"\t\t\t\t Press  5 > Age";
    cout<<endl<<endl<<"\t\t\t\tPlease Select Your Option >>>>> ";
    cin>>x;
     if(x=='1')
        editname(i);
    else if(x=='2')
        editcode(i);
    else if(x=='3')
        editdes(i);
    else if(x=='4')
        editexp(i);
    else if(x=='5')
        editage(i);
    else
        {
            system("cls");
            cout<<"\n\n\t\t\tInvalid Option.....";
            cout<<endl<<"\n\t\t\t";
            system("pause");
            menu();
        }
    cout<<endl<<"\n\t\t\t";
    system("pause");
    menu();
}

void employee::editname(int i)
{
    cout<<"\n\t\tEnter the New Name >>>  ";
    cin>>emp[i].name;
    ofstream file;
    file.open("EMPLOYMNGMENT.xls");
    for(i=0;i<num+n;i++)
        file<<emp[i].name<<"\t"<<emp[i].code<<"\t"<<emp[i].designation<<"\t"<<emp[i].exp<<"\t"<<emp[i].age<<"\n";
    file.close();
}

void employee::editcode(int i)
{
    cout<<"\n\t\t\t\tEnter the New Job Code >>>  ";
    cin>>emp[i].code;
    ofstream file;
    file.open("EMPLOYMNGMENT.xls");
    for(i=0;i<num+n;i++)
        file<<emp[i].name<<"\t"<<emp[i].code<<"\t"<<emp[i].designation<<"\t"<<emp[i].exp<<"\t"<<emp[i].age<<"\n";
    file.close();
}

void employee::editdes(int i)
{
    cout<<"\n\t\t\t\tEnter the New Designation >>>  ";
    cin>>emp[i].designation;
    ofstream file;
    file.open("EMPLOYMNGMENT.xls");
    for(i=0;i<num+n;i++)
        file<<emp[i].name<<"\t"<<emp[i].code<<"\t"<<emp[i].designation<<"\t"<<emp[i].exp<<"\t"<<emp[i].age<<"\n";
    file.close();
}

void employee::editexp(int i)
{
    cout<<"\n\t\t\t\tEnter the New Experience >>>  ";
    cin>>emp[i].exp;
        ofstream file;
    file.open("EMPLOYMNGMENT.xls");
    for(i=0;i<num+n;i++)
        file<<emp[i].name<<"\t"<<emp[i].code<<"\t"<<emp[i].designation<<"\t"<<emp[i].exp<<"\t"<<emp[i].age<<"\n";
    file.close();
}

void employee::editage(int i)
{
    cout<<"\n\t\t\t\tEnter the New Age >>> ";
    cin>>emp[i].age;
    ofstream file;
    file.open("EMPLOYMNGMENT.xls");
    for(i=0;i<num+n;i++)
        file<<emp[i].name<<"\t"<<emp[i].code<<"\t"<<emp[i].designation<<"\t"<<emp[i].exp<<"\t"<<emp[i].age<<"\n";
    file.close();
}

void employee::delete_em()
{
    long int code;
    system("cls");
    cout<<"\n\n\n\t\tDelete for Entry.. "<<endl<<"\t\tEnter an Job Code to Delete that Entry : ";
    cin>>code;
    for(i=0;i<num+n;i++)
        if(emp[i].code==code)
            break;
    if(i==num+n)
        {
              cout<<"\n\t\t\t\tEntered Job code is Invalid..... ";
            cout<<endl<<"\n\t\t\t";
            system("pause");
            menu();
        }
    for( ;i<num+n;i++)
        emp[i]=emp[i+1];
    num--;
    ofstream file;
    file.open("EMPLOYMNGMENT.xls");
    for(i=0;i<num+n;i++)
        file<<emp[i].name<<"\t"<<emp[i].code<<"\t"<<emp[i].designation<<"\t"<<emp[i].exp<<"\t"<<emp[i].age<<"\n";
    file.close();
    cout<<endl<<"\n\t\t\t";
    cout<<"Entry is Deleted.....";
    cout<<endl<<"\n\t\t\t";
    system("pause");
    menu();
}

void employee::list_em()
{
    system("cls");
    cout<<"\n\n\n\t\t\t"<<"    EMPLOYEE NAME     "<<"JOB CODE     "<<"    DESIGNATION     "<<"EXPERIENCE  "<<"AGE"<<endl;
    cout<<"\t\t\t"<<"----------------------------------------------------------------------------"<<endl;
    for(i=0;i<num+n;i++)
        cout<<"\t\t\t"<<setw(22)<<std::left<<emp[i].name<<setw(13)<<emp[i].code<<setw(20)<<std::left<<emp[i].designation<<setw(13)<<emp[i].exp<<setw(3)<<emp[i].age<<endl;
    cout<<endl<<"\n\t\t\t";
    system("pause");
    menu();
}

void employee::built_em()
{
    system("cls");
    n=num=0;
    cout<<"\n\n\n\t\tMaximum Number of Entries >>>  "<<MAX<<endl<<"\n\t\tHow Many Entries do You Want : ";
    cin>>num;
    ofstream file;
    file.open("EMPLOYMNGMENT.xls");
    if(num>MAX)
    {
        cout<<endl<<"\n\t\t\t";
        cout<<"Entered Number is Invalid..... ";
        cout<<endl<<"\n\t\t\t";
        system("pause");
        menu();
    }
    else
    {
         for(i=n;i<num;i++)
        {
            cout<<endl<<"\t\tEnter the Name of the Employee : ";
            cin>>emp[i].name;
            do
            {
                flag=0;
                cout<<"\t\tEnter the Job Code of the Employee : ";
                cin>>emp[i].code;
                    try
                    {
                        if(emp[i].code<=999)
                            throw 1;
                        if(emp[i].cheack())
                            throw 'a';
                    }
                   catch(int D)
                    {
                        cout<<"\t\tEnter Job Code is Invalid.....\n\t\t  Please Enter the New Job Code which has at lest 4 Digit.\n";
                        flag=1;
                    }
                    catch(char D)
                    {
                        cout<<"\t\tEnter Job Code is Already exist.....\n\t\t  Please Enter the New Job Code.....\n";
                        flag=1;
                    }
            }while(flag);
            cout<<"\t\tEnter the Designation of the Employee : ";
            cin>>emp[i].designation;
            cout<<"\t\tHow many year's Experience of the Employee : ";
            cin>>emp[i].exp;
            cout<<"\t\tEnter the age of the Employee : ";
            cin>>emp[i].age;
            file<<emp[i].name<<"\t"<<emp[i].code<<"\t"<<emp[i].designation<<"\t"<<emp[i].exp<<"\t"<<emp[i].age<<"\n";
        }
    }
    cout<<endl<<"\n\t\t\t";
    file.close();
    system("pause");
    menu();
}

void employee::insert_em()
{
    system("cls");
    ofstream file;
    file.open("EMPLOYMNGMENT.xls",ios::app);
    i=num+n;
    num++;
    cout<<endl<<"\n\n\n\n\t\tEnter the Name of the Employee : ";
    cin>>emp[i].name;
    do
    {
        flag=0;
        cout<<"\t\tEnter the Job Code of the Employee : ";
        cin>>emp[i].code;
        try
        {
            if(emp[i].code<=999)
                throw 1;
            if(emp[i].cheack())
                throw 'a';
        }
       catch(int D)
        {
            cout<<"\t\tEnter Job Code is Invalid.....\n\t\t  Please Enter the New Job Code which has at lest 4 Digit.....\n";
            flag=1;
        }
        catch(char D)
        {
            cout<<"\t\tEnter Job Code is Already exist......\n\t\t  Please Enter the New Job Code.....\n";
            flag=1;
        }
    }while(flag);
    cout<<"\t\tEnter the Designation of the Employee : ";
    cin>>emp[i].designation;
    cout<<"\t\tHow Many Year's Experience of the Employee : ";
    cin>>emp[i].exp;
    cout<<"\t\tEnter the age of the Employee : ";
    cin>>emp[i].age;
    cout<<endl<<"\n\t\t\t";
    file<<emp[i].name<<"\t"<<emp[i].code<<"\t"<<emp[i].designation<<"\t"<<emp[i].exp<<"\t"<<emp[i].age<<"\n";
    system("pause");
    file.close();
    menu();
}

void menu()
{
    system("cls");
    char x;
    cout<<endl<<"\n\n\t*******  Employees Management System  ******* ";
    cout<<endl<<"\n\t Press  1  >  Built The Table";
    cout<<endl<<"\t Press  2  >  List The Table";
    cout<<endl<<"\t Press  3  >  Insert New Entry";
    cout<<endl<<"\t Press  4  >  Delete an Entry";
    cout<<endl<<"\t Press  5  >  Edit an Entry";
    cout<<endl<<"\t Press  6  >  Search a Record";
    cout<<endl<<"\t Press  0  >  Quit The Program";
    cout<<endl<<endl<<"\t\t Please Select Your Option >>>>> ";
    cin>>x;
    if(x=='1')
        ex.built_em();
    else if(x=='2')
        ex.list_em();
    else if(x=='3')
        ex.insert_em();
    else if(x=='4')
        ex.delete_em();
    else if(x=='5')
        ex.edit_em();
    else if(x=='6')
        ex.search_em();
    else if(x=='0')
        {
            system("cls");
            cout<<"\n\n\n\n\t\t\t\tThank You For Visit"<<endl<<"\n\t\t\t\tMADE BY : \"Dip Kheni\""<<endl<<endl;
            exit(0);
        }
    else
        {
            system("cls");
            cout<<"\n\n\t\t\tInvalid Option.....";
            cout<<endl<<"\n\t\t\t";
            system("pause");
            menu();
        }
}

void load()
{
    ifstream file;
    file.open("EMPLOYMNGMENT.xls");
        for(i=0;!file.eof();i++)
        {
            file>>name>>code>>designation>>exp>>age;
            emp[i].getdata(name,code,designation,exp,age);
            n++;
        }
    file.close();
}
