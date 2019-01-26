#pragma once
#ifndef _SSE3_FUNTIONS_H_
#define _SSE3_FUNTIONS_H_

//Common functions
int sse3_readConfig(char*);
int sse3_executePost(char*, char*);
int sse3_register();
int sse3_setupHeartBeat();
int sse3_deauthFromSSE3();
int sse3_registerPlugin();
int sse3_registerPluginEvents();

//Plugin event register functions
int sse3_registerPluginEventPokeHeader();
int sse3_registerPluginEventTextDisplay();
int sse3_registerPluginEventCurrentlyTalking();

//Plugin event specific functions
int sse3_sendEventPokeHeader(char *);
int sse3_sendEventTextDisplay(char *);

DWORD WINAPI sse3_sendHeartBeat();
DWORD WINAPI sse3_sendPoke(LPVOID stringParams);
char *stringcopywithpointer(const char *source);
struct PokeParameters
{
	char *user;
	char *messages;
};

#endif