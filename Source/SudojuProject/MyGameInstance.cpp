// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init()
{
	// �θ��� �Լ��� ȣ��
	Super::Init();

	// CategoryName : �⺻������ �𸮾󿡼� �����ϴ� LogTemp
	// Verbosity : Log (Log, Warning, Error) ���� ����
	// Format : TEXT("%s") ���ڿ� ���·� ���
	UE_LOG(LogTemp, Log, TEXT("%s"), TEXT("Hello, World"));
}
