<!-- Texto para colar na página da release. O zip é anexado sozinho pela Action (.github/workflows/release.yml). -->
Port **nativo** de Yu-Gi-Oh! Forbidden Memories (PS1, SLUS-01411) para PlayStation 2. Esta versão acerta o **som dos vídeos** e deixa o port mais firme no console.

## Novidades da 0.3.2 beta
- **Som dos vídeos sem cortes:** o áudio do PS2 só guarda 53 ms de som por vez e o port tentava guardar 100 ms; ficava sempre cheio e cortava. Agora o port mede esse espaço e mantém o som em 2/3 dele, corrigindo aos poucos a diferença de relógio. Conferido num PS2 Slim de verdade: nenhum corte durante o vídeo de abertura.
- **Leitura do disco mais segura:** uma leitura incompleta do pendrive podia fazer o jogo achar que o disco tinha acabado no meio (vídeo terminando cedo, som sumindo). Agora a leitura é completada.
- Se o contador de áudio do PS2 parar de responder, o som continua tocando pelo relógio em vez de ficar mudo.
- **Ícone do memory card:** o Enigma do Milênio em 3D, girando, na pasta YFMPS2.
- **Capas do OPL** com a arte da caixa original, faixa de PS2 e telas do port em português.
- A abertura mostra a versão certa (antes dizia 0.2 beta).
- Correções de revisões de código (Qwen e auditoria): hash dos módulos sem cópia na memória e com limite de endereço.

## Novidades da 0.3.1 beta
- **Adaptador HDMI**: a tela AJUSTES agora aparece em 480i, que toda TV mostra (pelo AV e pelo HDMI). Antes ela era em 240p, que muitos adaptadores HDMI não passam: a tela ficava preta e não dava para escolher o 480p. Com o HDMI, aperte um botão antes dos 5 s, escolha **480p** em Vídeo e confirme. Conferido num PS2 de verdade.
- Ícone do memory card: a versão antiga é apagada antes de gravar a nova, e o `YFM-LOG.txt` diz se a gravação deu certo.

## Novidades da 0.3.0 beta
- **Tela AJUSTES** ao ligar (como no port de Super Mario World), com fundo feito das artes das cartas lidas do seu disco: vídeo, tela, idioma, posição e trapaças. Com tudo salvo, começa sozinha em 5 s.
- **Vídeo 240p ou 480p** (o 480p para cabo componente ou adaptador HDMI). Um modo novo pergunta se a imagem apareceu e volta sozinho se não.
- **16:9** de verdade: o cenário 3D mostra mais dos lados. No jogo, **L2+R2+X** troca 4:3 e 16:9.
- **Posição na TV**: centraliza a imagem quando a TV corta ou desloca (comum pelo AV), sem perder nitidez. No jogo, **L2+R2 + setas**.
- **Trapaças**: todas as cartas, todos os duelistas do Duelo Livre, 999999 StarChips, compras de graça, ver a mão do CPU, duelos com 9999 PV, StarChips e PV infinitos. E seus próprios códigos GameShark num `TRAPACAS.TXT`.
- **criar-port.html**: abre no navegador do PC e monta a ISO ou a pasta do aplicativo a partir do `.bin/.cue` do seu disco, sem instalar nada.
- **Ícone 3D do memory card** (moeda com o Olho de Rá) na pasta `YFMPS2`.
- Corrigido: 480i que ocupava só a metade de cima da TV (o 480i saiu, ficam 240p e 480p); a lista "Build Deck: which deck?" do port de PC que saía da caixa na loja (montar o deck abre direto, como no PS1); saves e configuração indo para cartões diferentes com dois memory cards.

## Como jogar
**Mais fácil:** abra o `criar-port.html` no navegador, escolha a imagem do seu disco e siga os passos.

**Pelo ELF:** extraia a pasta `YFM` no pendrive, coloque a imagem do seu disco como `YFM.bin` e abra o `YFM_PS2.ELF` pelo OPL (como app) ou wLaunchELF.

**Pela ISO:** coloque a imagem `.bin` do seu disco na pasta `YFM`, dê dois cliques no `montar_iso.exe`, ponha a ISO na pasta `CD` do pendrive e a pasta `ART` na raiz.

**A imagem do jogo não vem no pacote**, e a ISO que você montar tem o seu jogo dentro: não compartilhe.

## Problemas conhecidos
- Vídeos ainda em ajuste fino no console.
- O nome escrito no topo da arte da carta e as imagens com texto (menu principal, game over) continuam em inglês.

Achou um bug? Abra uma issue com o `YFM-LOG.txt` (ao lado do ELF; pela ISO, na pasta `YFMPS2` do memory card) e uma foto da tela.

## Apoie
Projeto gratuito e sem fins lucrativos. Se quiser apoiar os próximos ports: Pix e Ko-fi na seção [Apoie o projeto](https://github.com/guilhermesoti/yugiohps1praps2#apoie-o-projeto).

Créditos em [CREDITOS.md](https://github.com/guilhermesoti/yugiohps1praps2/blob/main/CREDITOS.md). Yu-Gi-Oh! é marca de Konami / Kazuki Takahashi; projeto de fã sem ligação com a Konami.
