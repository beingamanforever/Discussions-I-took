Disussion Topic: Creation and Detection of Deepfakes, StyleGANs

Discussion Date: 3rd April

Discussion Venue: ACM Room, SAC, IIT Roorkee

Associated with: VLG, IIT Roorkee

# Flow of the lecture:
- Brief idea of what deepfakes are and where they are used, with the help of examples.
- Introduction to different methods for the creation of deepfakes.
- Focus on StyleGANs for the creation
- Idea on how GANs work, explanation of the value function and the proof using JS divergence that p_data and p_generated are similar, using the expected value for the entire distribution.
- Explaning what does mini_max game logic means in the context of GANs, and what is the objective of G (generator) and D (discriminator), and using the idea for the proof.
![image](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/dffd27dd-9380-4466-98f9-6195839c7fa2)
![image](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/ddf99656-20d6-4413-b092-fd77fb36c44a)
- Clearning the underlying assumptions for the proof (no mode collapse)
- Leading to Progressive GANs, and explaning their architecture
- Explaning  how PGANs led to StyleGANs, and how the later is better and more importantly how?
- Talk on the architecture of StyleGANs, and its different parts and their work, importance.
- Dive into AdaIN and how it helps, how Stochastic Variation(noise) affects the images produced, importance of style factor and demostrating their affect on images with the help of videos for better understanding
   ![image](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/948bcd60-1a0b-4d62-b06c-f0802cfb7e20)
- Explaning what do we mean by Style Factor, and how it affects the types of images produced
  ![image](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/e41fa329-99ae-4ca3-88a5-9c385c45431c)
- Giving an feel of why stylegans work better by mapping latent space (z) to another space (w), with the help of the above illustration from the StyleGAN paper
  ![image](https://github.com/beingamanforever/Discussions-I-took/assets/121532863/bebce439-d2b6-468b-8ef8-5c5153628a36)
- Transfering the lecture to my partner for the detection of deepfakes part


