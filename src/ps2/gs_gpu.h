/* The PS1 GPU on the GS (gs_gpu.c). */
#ifndef MEMORIES_PS2_GS_GPU_H
#define MEMORIES_PS2_GS_GPU_H
#include <stddef.h>
#include <stdint.h>
void GsGpu_Init(void);
void GsGpu_IntroFrame(const uint32_t *abgr);
int GsGpu_Active(void);
size_t GsGpu_Gp0(const uint32_t *words, size_t count);
void GsGpu_Load(int x, int y, int w, int h);
void GsGpu_Fill(int x, int y, int w, int h, uint32_t rgb);
void GsGpu_Move(int sx, int sy, int dx, int dy, int w, int h);
int GsGpu_Stale(int x, int y, int w, int h);
void GsGpu_Present(const uint16_t *vram, int x, int y, int w, int h, int rgb24);
unsigned GsGpu_Stats(unsigned *tiles);
void GsGpu_ReadVram(uint16_t *out);
/* Melhorias visuais: 0 original, 1 sem pontilhado, 2 sem pontilhado + filtro
 * bilinear nos polígonos 3D (o padrão). */
void GsGpu_SetVisual(int mode);
int GsGpu_Visual(void);
/* 16:9: o 3D numa imagem 4/3 mais larga (426 px na tela), sem esticar. */
void GsGpu_SetWide(int on);
/* TESTE: desenho em resolução dobrada (640 x 480, 480i). */
void GsGpu_SetHires(int on);
/* Tamanho da imagem na TV, largura e altura de 80 a 100 (%): abaixo de 100
 * cada quadro é redesenhado menor e centrado, para a TV não cortar as bordas. */
void GsGpu_SetTamanho(int largura, int altura);
int GsGpu_Largura(void);
int GsGpu_Altura(void);
/* Posição da imagem na TV: x em pontos (do quadro de 320), y em linhas, de
 * -16 a 16. Vale no próximo quadro mostrado. */
void GsGpu_SetPosicao(int x, int y);
int GsGpu_PosicaoX(void);
int GsGpu_PosicaoY(void);
int GsGpu_Wide(void);
int GsGpu_ReadShown(uint16_t *out, int *w, int *h);
/* Modo de vídeo (ajustes.h: VIDEO_240P, VIDEO_480P, VIDEO_480I). */
void GsGpu_SetVideo(int mode);
int GsGpu_Video(void);
/* Um quadro 320 x 240 de 32 bits (0xRRGGBB) na tela: a tela AJUSTES. */
void GsGpu_ShowPicture(uint32_t *rgb);
#endif
