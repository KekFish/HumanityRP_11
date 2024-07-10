class PassportDataTransfer
{

    string 	Name = "";
	string 	Surname = "";
	string 	DoB = "";
	string 	Citizen = "";
	string 	Add = "";
	string 	Add0 = "";
	string 	Add1 = "";
	string 	Add2 = "";
	string 	Add3 = "";
	string 	Add4 = "";
	string 	Add5 = "";
	string 	Add6 = "";

}

enum PassRPC
{

    SAVEPASSPORT = 97876520,
    REQUESTPASSPORT_DATA,
    RECIVEPASSPORT_DATA

}

enum PassUI
{

    PASSPORTMENU = 97877521,
	PERMITMENU

}