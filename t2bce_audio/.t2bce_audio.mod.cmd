savedcmd_t2bce_audio.mod := printf '%s\n'   audio.o protocol.o protocol_bce.o pcm.o | awk '!x[$$0]++ { print("./"$$0) }' > t2bce_audio.mod
