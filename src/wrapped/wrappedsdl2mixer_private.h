#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

DATA(__data_start, 4)
DATA(_edata, 4)
// _fini
// _init
GO(Mix_AllocateChannels, iFi)
GOM(Mix_ChannelFinished, vFEp)
GO(Mix_CloseAudio, vFv)
// Mix_EachSoundFont
GO(Mix_ExpireChannel,iFii)
GO(Mix_FadeInChannelTimed,iFipiii)
GO(Mix_FadeInMusic,iFpii)
GO(Mix_FadeInMusicPos,iFpiid)
GO(Mix_FadeOutChannel,iFii)
GO(Mix_FadeOutGroup,iFii)
GO(Mix_FadeOutMusic,iFi)
GO(Mix_FadingChannel, uFi)
GO(Mix_FadingMusic, uFv)
GO(Mix_FreeChunk,vFp)
GO(Mix_FreeMusic,vFp)
GO(Mix_GetChunk,pFi)
GO(Mix_GetChunkDecoder,pFi)
GO(Mix_GetMusicDecoder,pFi)
GO(Mix_GetMusicHookData,pFv)
GO(Mix_GetMusicType, uFp)
GO(Mix_GetNumChunkDecoders,iFv)
GO(Mix_GetNumMusicDecoders,iFv)
GO(Mix_GetSoundFonts,pFv)
GO(Mix_GetSynchroValue,iFv)
GO(Mix_GroupAvailable,iFi)
GO(Mix_GroupChannel,iFii)
GO(Mix_GroupChannels,iFiii)
GO(Mix_GroupCount,iFi)
GO(Mix_GroupNewer,iFi)
GO(Mix_GroupOldest,iFi)
GO(Mix_HaltChannel,iFi)
GO(Mix_HaltGroup,iFi)
GO(Mix_HaltMusic,iFv)
// Mix_HasChunkDecoder
GOM(Mix_HookMusic, vFEpp)
GOM(Mix_HookMusicFinished, vFEp)
GO(Mix_Init,iFi)
GO(Mix_Linked_Version,pFv)
GO(Mix_LoadMUS,pFp)
GOM(Mix_LoadMUSType_RW,pFEpii)
GOM(Mix_LoadMUS_RW,pFEpi)
GOM(Mix_LoadWAV_RW,pFEpi)
GO(Mix_OpenAudio, iFiWii)
GO(Mix_OpenAudioDevice, iFiWiipi)
GO(Mix_Pause,vFi)
GO(Mix_PauseMusic,vFv)
GO(Mix_Paused,iFi)
GO(Mix_PausedMusic,iFv)
GO(Mix_PlayChannelTimed,iFipii)
GO(Mix_PlayMusic,iFpi)
GO(Mix_Playing,iFi)
GO(Mix_PlayingMusic,iFv)
GO(Mix_QuerySpec,iFppp)
GO(Mix_QuickLoad_RAW,pFpu)
GO(Mix_QuickLoad_WAV,pFp)
GO(Mix_Quit,vFv)
GOM(Mix_RegisterEffect, iFEippp)
GO(Mix_ReserveChannels,iFi)
GO(Mix_Resume,vFi)
GO(Mix_ResumeMusic,vFv)
GO(Mix_RewindMusic,vFv)
GO(Mix_SetDistance, iFiC)
GO(Mix_SetMusicCMD,iFp)
GO(Mix_SetMusicPosition,iFd)
GO(Mix_SetPanning, iFiCC)
GO(Mix_SetPosition,iFiwC)
GOM(MinorityMix_SetPosition, iFEiw)
GOM(Mix_SetPostMix,vFEpp)
GO(Mix_SetReverseStereo,iFii)
GO(Mix_SetSoundFonts,iFp)
GO(Mix_SetSynchroValue,iFi)
GO(Mix_UnregisterAllEffects, iFi)
GOM(Mix_UnregisterEffect, iFEip) 
GO(Mix_Volume,iFii)
GO(Mix_VolumeChunk,iFpi)
GO(Mix_VolumeMusic,iFi)
