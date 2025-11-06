savedcmd_ehrootkit.mod := printf '%s\n'   ehrootkit.o | awk '!x[$$0]++ { print("./"$$0) }' > ehrootkit.mod
