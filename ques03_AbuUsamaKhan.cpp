#include <iostream>
#include <string>
using namespace std;


class HospitalLocation {
	string city;
	string branchName;

public:	
	void setCity(string cit) {
		city = cit;
	}
	
	void setBranchName(string bn) {
		branchName = bn;
	}
	
	string getCity() {
		return city;
	}	
	
	string setBranchName() {
		return branchName;
	}
};

class MedicalRecord {
	string patientSummary;
	
public:	
	void setSummary(string summ) {
		patientSummary = summ;
	}
	
	string getSummary() {
		return patientSummary;
	}
};

class Appointment : public HospitalLocation, public MedicalRecord{
	string patientName;
	string cnic;
	string contactNum;
	
public:
	bool isVerified;
	
	Appointment(string pn, string cni, string cn, string ps, string cit, string bn) {
		patientName = pn;
		cnic = cni;
		contactNum = cn;
		setSummary(ps);
		setCity(cit);
		setBranchName(bn);
	}
	
	void setPatientName(pn) {
		patientName = pn;
	}
	
	void setPatientCnic(cni) {
		cnic = cni;
	}
	
	void setPatientContactNum(cn) {
		contactNum = cn;
	}
	
	string getPatientName() {
		return patientName;
	}
	
	string getPatientCnic() {
		return cnic;
	}
	
	string getPatientContactNum() {
		return contactNum;
	}
	
};

class DoctorAppointment : public Appointment {
public:
	string doctorName;
	string visitPurpose;
	
	void verifyAppointment(bool ver) {
		if(ver)
			isVerify = true;
		else
			isVerify = false;
	}
	
	
};


int main() {
	Appointment* appointment1;
	appointment1[0] = Appointment("Aslam", "42201-1234567-8", "03001234567", "Patient has BP issue and little high sugar", "Karachi", "Nazimabad Br");
	
	cout <<"\n----------WELCOME TO----------\n"
		 <<"--Hospital Appointment System--\n"
}

