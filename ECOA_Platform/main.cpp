#include <iostream>

#include "include/ELI_SerializeOut.hpp"
#include "include/PlatformMain.hpp"
#include "include/ProtoHandler.hpp"
#include "include/ZMQReceiver.hpp"

int main(){

	//create the zmq and protobuf handlers
//	ZMQHandler zHandler;
//	ProtoHandler pHandler;

	//to serialise the ecoa types
    //ELI_SerializeOut ELI_Message_Converter_Tool;		//taken from BAE platform gen
	PlatformMain pfm;

	pfm.convertToELI();

	//to store message data
	std::string message;
	std::string messageHeader;
	int lValue;
	int rValue;
	int serviceRequest;

	//zHandler.zmqReadMethod(message, messageHeader);		//await ZMQ message
    //pHandler.protoMethod(message, messageHeader, serviceRequest, lValue, rValue);		//deserialize from .proto

	//to be implemented...
	//ELI_Message_Converter_Tool.serialise_ECOA__char8();
	//ELI_Message_Converter_Tool.serialise_ECOA__int16();
	//ELI_Message_Converter_Tool.serialise_ECOA__int16();
}
