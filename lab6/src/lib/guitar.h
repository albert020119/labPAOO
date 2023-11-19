class Guitar : public MusicInstrument{
    public:
        void play() override{
            std::cout << "playing guitar \n";
        }
        void tune() override{
            std::cout << "tuning guitar \n";
        }
}; 