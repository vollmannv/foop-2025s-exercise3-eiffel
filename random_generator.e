class
    RANDOM_GENERATOR

feature {NONE} -- Random Generator
    random_rng: RANDOM
        local
            time: TIME
            seed: INTEGER
        once
            create time.make_now
            seed := time.hour
            seed := seed * 60 + time.minute
            seed := seed * 1000 + time.milli_second
            create Result.make
            Result.set_seed (seed)
        end

    get_random_number (max: INTEGER): INTEGER
        do
            random_rng.forth
            Result := random_rng.item \\ max
        end
end
