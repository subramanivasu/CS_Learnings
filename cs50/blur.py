from PIL import Image,ImageFilter

before = Image.open("sample_1920×1280.bmp")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.bmp")