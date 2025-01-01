
import pygame
import sys

pygame.init()

# Set up the screen
screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Never Mess with a Coder")

# Colors
white = (255, 255, 255)
red = (255, 0, 0)

# Create a font object
font = pygame.font.Font(None, 36)

# Text to display
text = "Never mess with a coder"

# Render the text
text_surface = font.render(text, True, red)

# Get the text's rectangle
text_rect = text_surface.get_rect()

# Center the text on the screen
text_rect.center = (400, 300)

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    screen.fill(white)

    # Draw the text on the screen
    screen.blit(text_surface, text_rect)

    pygame.display.update()

pygame.quit()
sys.exit()

