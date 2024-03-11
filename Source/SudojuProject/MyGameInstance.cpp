// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init()
{
	// 부모의 함수를 호출
	Super::Init();

	// CategoryName : 기본적으로 언리얼에서 제공하는 LogTemp
	// Verbosity : Log (Log, Warning, Error) 수준 설정
	// Format : TEXT("%s") 문자열 형태로 출력
	UE_LOG(LogTemp, Log, TEXT("%s"), TEXT("Hello, World"));
}
