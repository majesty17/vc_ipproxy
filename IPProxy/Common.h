#ifndef _COMMOM_H_
#define _COMMOM_H_

using namespace System;
using namespace Microsoft::Win32;

void setProxy(String^ ip,String^ port){
	RegistryKey^ key=Registry::CurrentUser->OpenSubKey("Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings",true);
	key->SetValue("ProxyEnable",(Object^)1);
	key->Close();
	key=Registry::CurrentUser->OpenSubKey("Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings",true);
	key->SetValue("ProxyServer",ip+":"+port);
	key->Close();
}

void delProxy(){
	RegistryKey^ key=Registry::CurrentUser->OpenSubKey("Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings",true);
	key->SetValue("ProxyEnable",(Object^)0);
	key->DeleteValue("ProxyServer",false);
	key->Close();
}
int getPort(System::String^ str){
	int ret=0;
	for(int i=str->Length-1,j=1;i>0;i-=2,j*=10){
		switch(str[i]){
			case 'c':
				ret+=1*j;
				break;
			case 'k':
				ret+=2*j;
				break;
			case 'z':
				ret+=3*j;
				break;
			case 'm':
				ret+=4*j;
				break;
			case 'b':
				ret+=5*j;
				break;
			case 'w':
				ret+=6*j;
				break;
			case 'i':
				ret+=7*j;
				break;
			case 'r':
				ret+=8*j;
				break;
			case 'l':
				ret+=9*j;
				break;
		}
	}
	return ret;
}






#endif