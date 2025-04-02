# myPreProcessor
## Appunti sui requisiti
- più formati di errore
- funzione take word
- open/close {} superfluo (solo 1 funzione)
- header non parsati (?)
- parsing semplificato
- stop parse
- funzione di stampa separata
- precomp_procedure ricorsivo
- write_on_error -> stderror
- header = prototipi funzioni (header, nei file.c corpo funzione), var globali, costanti, includes
- liberie di parsing standard: strtok (parse_code)

## Organizzazione in pacchetti
(il main si trova in myPreCompiler.c)
1. roots
	- typedef
		- error_id
		- file_info
		- smart_string
	- headers
		- parse_commands (matt)
		- precomp_procedure (matt)
		- write_on_error (matt)
2. outers
	- headers
		- parsec (rick)
3. inners
	- headers
		- scanc (matt)
		- writec (rick)
