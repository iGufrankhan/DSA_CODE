
import pygame
import sys

pygame.init()


screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Gufran's Sketch")

# Colors
red = (255, 255, 255)
black = (0, 0, 0)

font = pygame.font.Font(None, 36)


text = "I am student of BIT Sindri"


text_surface = font.render(text, True, black)


text_rect = text_surface.get_rect()

text_rect.center = (400, 300)

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    screen.fill(red)
    screen.blit(text_surface, text_rect)
    
    pygame.display.update()

