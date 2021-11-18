################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
LD_SRCS += \
../src/lscript.ld 

C_SRCS += \
../src/fonctions_ES.c \
../src/main.c \
../src/platform.c \
../src/timers_b.c \
../src/wei.c 

OBJS += \
./src/fonctions_ES.o \
./src/main.o \
./src/platform.o \
./src/timers_b.o \
./src/wei.o 

C_DEPS += \
./src/fonctions_ES.d \
./src/main.d \
./src/platform.d \
./src/timers_b.d \
./src/wei.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 gcc compiler'
	arm-none-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I../../cpu_prof_bsp/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


