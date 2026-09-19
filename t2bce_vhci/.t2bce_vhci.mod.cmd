savedcmd_t2bce_vhci.mod := printf '%s\n'   vhci.o queue.o transfer.o | awk '!x[$$0]++ { print("./"$$0) }' > t2bce_vhci.mod
