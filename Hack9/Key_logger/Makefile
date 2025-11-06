# Makefile per eseguire in modo sicuro il keylogger in ambiente di test
# Targets: venv, install, run, logs, clean

PYTHON := python3
VENV_DIR := .venv
PIP := $(VENV_DIR)/bin/pip
PY := $(VENV_DIR)/bin/python
SCRIPT := keylogger.py
LOGFILE := .keylog

.PHONY: all venv install run logs clean

all: run

# crea il virtualenv (se già esiste non lo ricrea)
venv:
	@if [ -d "$(VENV_DIR)" ]; then \
		echo "Virtualenv già presente in $(VENV_DIR)"; \
	else \
		$(PYTHON) -m venv $(VENV_DIR); \
		echo "Virtualenv creato in $(VENV_DIR)"; \
	fi

# installa le dipendenze nel virtualenv
install: venv
	$(PIP) install --upgrade pip
	$(PIP) install -r requirements.txt

# esegui lo script nel virtualenv (foreground)
run: install
	@echo "[+] Avvio $(SCRIPT) — log in $(LOGFILE)"
	$(PY) $(SCRIPT)

# mostra il contenuto del file di log (se vuoi ispezionarlo)
logs:
	@if [ -f "$(LOGFILE)" ]; then \
		echo "=== Contenuto di $(LOGFILE) ==="; \
		cat "$(LOGFILE)"; \
	else \
		echo "Nessun file $(LOGFILE) presente."; \
	fi

# pulisce ambiente e log (ATTENZIONE: rimuove .venv e .keylog)
clean:
	@echo "[!] Pulizia: rimozione $(VENV_DIR) e $(LOGFILE) (se presenti)"
	@rm -rf $(VENV_DIR) || true
	@rm -f $(LOGFILE) || true
	@echo "Fatto."
