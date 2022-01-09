from PIL import Image,ImageFilter


before = Image.open("sample_1920×1280.bmp")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("edges_out.bmp")