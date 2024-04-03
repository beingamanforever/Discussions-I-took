Disussion Topic: Creation and Detection of Deepfakes, StyleGANs

Discussion Date: 3rd April

Discussion Venue: ACM Room, SAC, IIT Roorkee

Associated with: VLG, IIT Roorkee

# Flow of the lecture:
- Brief idea of what deepfakes are and where they are used, with the help of examples.
- Introduction to different methods for the creation of deepfakes.
- Focus on StyleGANs for the creation
- All in all whats different in generator’s architecture - progressive growing, noise mapping and adaptive instance normalisation.
- Idea on how GANs work, explanation of the value function and the proof using JS divergence that p_data and p_generated are similar, using the expected value for the entire distribution.
- Explaning what does mini_max game logic means in the context of GANs, and what is the objective of G (generator) and D (discriminator), and using the idea for the proof.
![image](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/dffd27dd-9380-4466-98f9-6195839c7fa2)
![image](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/ddf99656-20d6-4413-b092-fd77fb36c44a)
- Clearning the underlying assumptions for the proof (no mode collapse)
- Leading to Progressive GANs, and explaning their architecture
- Explaning  how PGANs led to StyleGANs, and how the later is better and more importantly how?
- Talk on the architecture of StyleGANs, and its different parts and their work, importance.
- Noise mapping network - as we go deep into the network the role of random noise kinda diminishes, so in styleGAN we add noise in b/w and do mapping.![Mapping Network](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/a6723bb2-13e4-4a5e-9c79-fc61f8fdb196)
- Explain the importance of mapping, of transforming z to w : how disentanglement helps in generating better images and how it helps in separating the features, as the normal distribution z becomes a mix of many features.![4qBTV](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/1be0d6e6-90e7-47db-8e05-cd25455d0c89)
- ![uses a learnt intermediate latent space, W, which more faith-](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/ba5aa8ac-30c6-41aa-aeed-a7ce0ce5f8ae)
![Pasted Graphic 7](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/c8502f61-cbda-4ffc-903c-8e6eed519e98)
- In style gans, while giving w to each conv network we use A, learnt affined transformation - along with gaussian noise b, before going to AdaIN, input to AdaIN is a style image, so every AdaIN has two inputs- one being the style image and second being the, (xi and y) - but before giving xi to the AdaIN we add noise B, to the feature map - for style variations. This Z is a constant vector and so is W.![Synthesis network](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/4a325647-03cd-4186-b3a9-f9d23b813d78)
- How upsampling is done, bilinear interpolation? as Style GANs works on Progressive GANs as the baseline hence we make it solve small problems first and then go to hard problems
![resolution](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/2beda13c-2b82-4211-968d-ae2a48b5b425)
- Dive into AdaIN and how it helps, how Stochastic Variation(noise) affects the images produced, importance of style factor and demostrating their affect on images with the help of videos for better understanding
   ![image](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/948bcd60-1a0b-4d62-b06c-f0802cfb7e20)
- Explaning what do we mean by Style Factor, and how it affects the types of images produced
  ![image](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/e41fa329-99ae-4ca3-88a5-9c385c45431c)
- Giving an feel of why stylegans work better by mapping latent space (z) to another space (w), with the help of the above illustration from the StyleGAN paper
  ![image](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/bebce439-d2b6-468b-8ef8-5c5153628a36)
- Transfering the lecture to my partner for the detection of deepfakes part


