################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ELI_SerializeOut.cpp \
../ELI_Tools.cpp \
../PlatformMain.cpp \
../ProtoHandler.cpp \
../ZMQReceiver.cpp \
../main.cpp 

OBJS += \
./ELI_SerializeOut.o \
./ELI_Tools.o \
./PlatformMain.o \
./ProtoHandler.o \
./ZMQReceiver.o \
./main.o 

CPP_DEPS += \
./ELI_SerializeOut.d \
./ELI_Tools.d \
./PlatformMain.d \
./ProtoHandler.d \
./ZMQReceiver.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	C:/cygwin/bin/g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


